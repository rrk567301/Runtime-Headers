@class IMAPResponse, NSData, IMAPConnection;

@interface IMAPParseContext : NSObject {
    const char *_start;
    const char *_end;
}

@property (retain, nonatomic) IMAPConnection *connection;
@property (retain, nonatomic) IMAPResponse *response;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) char invalid;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)_consumeSpaces;
- (void)_createResponseUsingMask:(unsigned long long)a0;
- (void)_createResponseWithoutTag:(char)a0;
- (char)_modificationSequenceValue:(unsigned long long *)a0;
- (id)_newArray;
- (id)_newArrayAllowingNulls:(char)a0;
- (id)_newArrayAllowingNulls:(char)a0 depth:(unsigned long long)a1;
- (id)_newAsString;
- (id)_newBodyData:(char)a0;
- (id)_newBodystructure;
- (id)_newCapabilityArray;
- (id)_newFlagsSet;
- (id)_newIDDictionary;
- (id)_newIMAPAtom:(long long)a0;
- (id)_newLiteral;
- (id)_newLiteralStringUsingCaseOption:(long long)a0;
- (id)_newMailboxWithSeparatorChar:(id)a0;
- (id)_newMessageSetWithoutStar;
- (id)_newModificationSequenceValue;
- (id)_newNamespace;
- (id)_newNamespaceExtension;
- (id)_newNstring;
- (id)_newNumber;
- (id)_newQuotedStringUsingCaseOption:(long long)a0;
- (id)_newStatusAttList;
- (id)_newStringUsingCaseOption:(long long)a0;
- (id)_newStringWithSingleQuotedCharacter;
- (char)_number:(unsigned int *)a0;
- (void)_parseBasicResponse;
- (void)_parseCapabilityResponse;
- (void)_parseEnabledResponse;
- (void)_parseError:(id)a0;
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
- (void)_parseVanishedResponse;
- (void)_parseWarning:(id)a0;
- (char)_rangeWithoutStar:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)initWithConnection:(id)a0 data:(id)a1;
- (id)parseIntoResponse;

@end
