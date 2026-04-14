@class NSArray, NSString;

@interface SAUIStreamChunk : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *streamFailureMessage;
@property (copy, nonatomic) NSString *streamId;
@property (copy, nonatomic) NSString *streamStage;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
