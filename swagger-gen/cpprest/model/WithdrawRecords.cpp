/**
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "WithdrawRecords.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

WithdrawRecords::WithdrawRecords()
{
    m_Id = 0.0;
    m_IdIsSet = false;
    m_User_id = 0.0;
    m_User_idIsSet = false;
    m_Coin = utility::conversions::to_string_t("");
    m_CoinIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Amount = utility::conversions::to_string_t("");
    m_AmountIsSet = false;
    m_Fee = utility::conversions::to_string_t("");
    m_FeeIsSet = false;
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_Tx_id = utility::conversions::to_string_t("");
    m_Tx_idIsSet = false;
    m_Submited_at = utility::conversions::to_string_t("");
    m_Submited_atIsSet = false;
    m_Updated_at = utility::conversions::to_string_t("");
    m_Updated_atIsSet = false;
}

WithdrawRecords::~WithdrawRecords()
{
}

void WithdrawRecords::validate()
{
    // TODO: implement validation
}

web::json::value WithdrawRecords::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_User_idIsSet)
    {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(m_User_id);
    }
    if(m_CoinIsSet)
    {
        val[utility::conversions::to_string_t("coin")] = ModelBase::toJson(m_Coin);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_FeeIsSet)
    {
        val[utility::conversions::to_string_t("fee")] = ModelBase::toJson(m_Fee);
    }
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    }
    if(m_Tx_idIsSet)
    {
        val[utility::conversions::to_string_t("tx_id")] = ModelBase::toJson(m_Tx_id);
    }
    if(m_Submited_atIsSet)
    {
        val[utility::conversions::to_string_t("submited_at")] = ModelBase::toJson(m_Submited_at);
    }
    if(m_Updated_atIsSet)
    {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(m_Updated_at);
    }

    return val;
}

void WithdrawRecords::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user_id")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coin")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("coin")];
        if(!fieldValue.is_null())
        {
            setCoin(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("status")];
        if(!fieldValue.is_null())
        {
            setStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("amount")];
        if(!fieldValue.is_null())
        {
            setAmount(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("fee")];
        if(!fieldValue.is_null())
        {
            setFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("address")];
        if(!fieldValue.is_null())
        {
            setAddress(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tx_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("tx_id")];
        if(!fieldValue.is_null())
        {
            setTxId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("submited_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("submited_at")];
        if(!fieldValue.is_null())
        {
            setSubmitedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated_at")];
        if(!fieldValue.is_null())
        {
            setUpdatedAt(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void WithdrawRecords::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_User_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_id"), m_User_id));
    }
    if(m_CoinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("coin"), m_Coin));
        
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
        
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
        
    }
    if(m_FeeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fee"), m_Fee));
        
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("address"), m_Address));
        
    }
    if(m_Tx_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tx_id"), m_Tx_id));
        
    }
    if(m_Submited_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("submited_at"), m_Submited_at));
        
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated_at"), m_Updated_at));
        
    }
}

void WithdrawRecords::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("user_id")))
    {
        setUserId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("coin")))
    {
        setCoin(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("coin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        setAmount(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fee")))
    {
        setFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("address")))
    {
        setAddress(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("address"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tx_id")))
    {
        setTxId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tx_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("submited_at")))
    {
        setSubmitedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("submited_at"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated_at"))));
    }
}

double WithdrawRecords::getId() const
{
    return m_Id;
}


void WithdrawRecords::setId(double value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool WithdrawRecords::idIsSet() const
{
    return m_IdIsSet;
}

void WithdrawRecords::unsetId()
{
    m_IdIsSet = false;
}

double WithdrawRecords::getUserId() const
{
    return m_User_id;
}


void WithdrawRecords::setUserId(double value)
{
    m_User_id = value;
    m_User_idIsSet = true;
}
bool WithdrawRecords::userIdIsSet() const
{
    return m_User_idIsSet;
}

void WithdrawRecords::unsetUser_id()
{
    m_User_idIsSet = false;
}

utility::string_t WithdrawRecords::getCoin() const
{
    return m_Coin;
}


void WithdrawRecords::setCoin(utility::string_t value)
{
    m_Coin = value;
    m_CoinIsSet = true;
}
bool WithdrawRecords::coinIsSet() const
{
    return m_CoinIsSet;
}

void WithdrawRecords::unsetCoin()
{
    m_CoinIsSet = false;
}

utility::string_t WithdrawRecords::getStatus() const
{
    return m_Status;
}


void WithdrawRecords::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool WithdrawRecords::statusIsSet() const
{
    return m_StatusIsSet;
}

void WithdrawRecords::unsetStatus()
{
    m_StatusIsSet = false;
}

utility::string_t WithdrawRecords::getAmount() const
{
    return m_Amount;
}


void WithdrawRecords::setAmount(utility::string_t value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}
bool WithdrawRecords::amountIsSet() const
{
    return m_AmountIsSet;
}

void WithdrawRecords::unsetAmount()
{
    m_AmountIsSet = false;
}

utility::string_t WithdrawRecords::getFee() const
{
    return m_Fee;
}


void WithdrawRecords::setFee(utility::string_t value)
{
    m_Fee = value;
    m_FeeIsSet = true;
}
bool WithdrawRecords::feeIsSet() const
{
    return m_FeeIsSet;
}

void WithdrawRecords::unsetFee()
{
    m_FeeIsSet = false;
}

utility::string_t WithdrawRecords::getAddress() const
{
    return m_Address;
}


void WithdrawRecords::setAddress(utility::string_t value)
{
    m_Address = value;
    m_AddressIsSet = true;
}
bool WithdrawRecords::addressIsSet() const
{
    return m_AddressIsSet;
}

void WithdrawRecords::unsetAddress()
{
    m_AddressIsSet = false;
}

utility::string_t WithdrawRecords::getTxId() const
{
    return m_Tx_id;
}


void WithdrawRecords::setTxId(utility::string_t value)
{
    m_Tx_id = value;
    m_Tx_idIsSet = true;
}
bool WithdrawRecords::txIdIsSet() const
{
    return m_Tx_idIsSet;
}

void WithdrawRecords::unsetTx_id()
{
    m_Tx_idIsSet = false;
}

utility::string_t WithdrawRecords::getSubmitedAt() const
{
    return m_Submited_at;
}


void WithdrawRecords::setSubmitedAt(utility::string_t value)
{
    m_Submited_at = value;
    m_Submited_atIsSet = true;
}
bool WithdrawRecords::submitedAtIsSet() const
{
    return m_Submited_atIsSet;
}

void WithdrawRecords::unsetSubmited_at()
{
    m_Submited_atIsSet = false;
}

utility::string_t WithdrawRecords::getUpdatedAt() const
{
    return m_Updated_at;
}


void WithdrawRecords::setUpdatedAt(utility::string_t value)
{
    m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool WithdrawRecords::updatedAtIsSet() const
{
    return m_Updated_atIsSet;
}

void WithdrawRecords::unsetUpdated_at()
{
    m_Updated_atIsSet = false;
}

}
}
}
}

