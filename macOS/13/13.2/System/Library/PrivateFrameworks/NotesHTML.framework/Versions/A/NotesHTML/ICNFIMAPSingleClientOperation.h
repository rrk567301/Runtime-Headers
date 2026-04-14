@class NSString, NSMutableArray, ICNFMCError;

@interface ICNFIMAPSingleClientOperation : ICNFIMAPClientOperation {
    unsigned long long _sequenceNumber;
}

@property (retain) NSMutableArray *untaggedResponses;
@property (readonly) BOOL handlesAllUntaggedResponses;
@property (retain) ICNFMCError *error;
@property unsigned long long sequenceNumber;
@property unsigned long long sessionNumber;
@property (readonly, copy) NSString *tag;
@property BOOL isComplete;
@property (readonly, copy) NSString *debugCommandString;

- (void).cxx_destruct;
- (long long)composition;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (void)cleanupAfterCompletion;
- (id)newCommandString;

@end
