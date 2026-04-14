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
- (id)initWithConnection:(id)a0 data:(id)a1;
- (id)parseIntoResponse;
- (void)_createResponseWithoutTag:(BOOL)a0;
- (void)_createResponseUsingMask:(unsigned long long)a0;
- (void)_parseBasicResponse;
- (void)_parseCapabilityResponse;
- (void)_parseFetchResponse;
- (void)_parseFlagsResponse;
- (void)_parseIDResponse;
- (void)_parseListResponse;
- (void)_parseNamespaceResponse;
- (void)_parseOtherResponse;
- (void)_parseQuotaResponse;
- (void)_parseQuotaRootResponse;
- (void)_parseSearchResponse;
- (void)_parseStatusResponse;
- (void)_parseWarning:(id)a0;
- (void)_parseError:(id)a0;
- (BOOL)_consumeSpaces;
- (id)_newIMAPAtom:(long long)a0;
- (id)_newStringWithSingleQuotedCharacter;
- (id)_newQuotedStringUsingCaseOption:(long long)a0;
- (id)_newStringUsingCaseOption:(long long)a0;
- (id)_newNstring;
- (BOOL)_number:(unsigned int *)a0;
- (id)_newNumber;
- (BOOL)_modificationSequenceValue:(unsigned long long *)a0;
- (id)_newModificationSequenceValue;
- (id)_newLiteralStringUsingCaseOption:(long long)a0;
- (id)_newLiteral;
- (id)_newAsString;
- (id)_newMailboxWithSeparatorChar:(id)a0;
- (id)_newArray;
- (id)_newCapabilityArray;
- (id)_newStatusAttList;
- (id)_newMessageSetWithoutStar;
- (id)_newIDDictionary;
- (id)_newFlagsSet;
- (id)_newBodyData:(BOOL)a0;
- (id)_newNamespace;
- (id)_newNamespaceExtension;
- (id)_newArrayAllowingNulls:(BOOL)a0;
- (id)_newBodystructure;

@end
