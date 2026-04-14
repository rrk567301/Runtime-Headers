@class NSError, NSMutableArray, NSString;

@interface IMAPSingleCommand : IMAPCommand {
    unsigned long long _sequenceNumber;
}

@property (retain) NSMutableArray *untaggedResponses;
@property (readonly) BOOL handlesAllUntaggedResponses;
@property (retain) NSError *error;
@property unsigned long long sequenceNumber;
@property unsigned long long sessionNumber;
@property (readonly, copy) NSString *tag;
@property BOOL isComplete;

- (long long)composition;
- (void).cxx_destruct;
- (void)cleanupAfterCompletion;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (id)newCommandString;

@end
