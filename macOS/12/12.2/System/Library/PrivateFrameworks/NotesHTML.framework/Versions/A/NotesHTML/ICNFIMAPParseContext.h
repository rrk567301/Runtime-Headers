@class ICNFIMAPConnection, NSData, ICNFIMAPResponse;

@interface ICNFIMAPParseContext : NSObject {
    const char *_start;
    const char *_end;
}

@property (retain, nonatomic) ICNFIMAPConnection *connection;
@property (retain, nonatomic) ICNFIMAPResponse *response;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL invalid;

- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_parseBasicResponse;
- (BOOL)_consumeSpaces;
- (void)_parseWarning:(id)a0;
- (void)_createResponseWithoutTag:(BOOL)a0;
- (id)_newIMAPAtom:(long long)a0;
- (void)_parseError:(id)a0;
- (BOOL)_number:(unsigned int *)a0;
- (void)_createResponseUsingMask:(unsigned long long)a0;
- (void)_parseCapabilityResponse;
- (void)_parseFlagsResponse;
- (void)_parseIDResponse;
- (void)_parseListResponse;
- (void)_parseNamespaceResponse;
- (void)_parseQuotaResponse;
- (void)_parseQuotaRootResponse;
- (void)_parseSearchResponse;
- (void)_parseStatusResponse;
- (void)_parseFetchResponse;
- (void)_parseOtherResponse;
- (id)_newArray;
- (id)_newCapabilityArray;
- (id)_newFlagsSet;
- (id)_newNumber;
- (id)_newMessageSetWithoutStar;
- (id)_newModificationSequenceValue;
- (id)_newQuotedStringUsingCaseOption:(long long)a0;
- (id)_newBodyData:(BOOL)a0;
- (id)_newBodystructure;
- (BOOL)_modificationSequenceValue:(unsigned long long *)a0;
- (id)_newIDDictionary;
- (id)_newNstring;
- (id)_newMailboxWithSeparatorChar:(id)a0;
- (id)_newNamespace;
- (id)_newLiteralStringUsingCaseOption:(long long)a0;
- (id)_newAsString;
- (id)_newStatusAttList;
- (id)_newStringUsingCaseOption:(long long)a0;
- (id)_newLiteral;
- (id)_newArrayAllowingNulls:(BOOL)a0;
- (id)_newStringWithSingleQuotedCharacter;
- (id)_newNamespaceExtension;
- (id)initWithConnection:(id)a0 data:(id)a1;
- (id)parseIntoResponse;

@end
