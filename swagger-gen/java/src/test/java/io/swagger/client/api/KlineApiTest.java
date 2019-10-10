/*
 * Bybit API
 * ## REST API for the Bybit Exchange. 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.api;

import io.swagger.client.ApiException;
import java.math.BigDecimal;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for KlineApi
 */
@Ignore
public class KlineApiTest {

    private final KlineApi api = new KlineApi();

    
    /**
     * Query historical kline.
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void klineGetTest() throws ApiException {
        String symbol = null;
        String interval = null;
        BigDecimal from = null;
        String limit = null;
        Object response = api.klineGet(symbol, interval, from, limit);

        // TODO: test validations
    }
    
}