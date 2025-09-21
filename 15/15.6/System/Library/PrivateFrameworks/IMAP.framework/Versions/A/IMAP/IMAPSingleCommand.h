@class NSError, NSMutableArray, NSString;

@interface IMAPSingleCommand : IMAPCommand {
    unsigned long long _sequenceNumber;
}

@property (retain) NSMutableArray *untaggedResponses;
@property (readonly) char handlesAllUntaggedResponses;
@property (retain) NSError *error;
@property unsigned long long sequenceNumber;
@property unsigned long long sessionNumber;
@property (readonly, copy) NSString *tag;
@property char isComplete;

- (void).cxx_destruct;
- (long long)composition;
- (void)cleanupAfterCompletion;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (id)newCommandString;

@end
