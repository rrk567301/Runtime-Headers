@class NSString, NSError;

@interface SMMadridMessageResultWaitingForProcessing : NSObject

@property (copy, nonatomic) NSString *messageGUID;
@property (nonatomic) char success;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithMessageGUID:(id)a0 success:(char)a1 error:(id)a2;

@end
