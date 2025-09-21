@class NSString, NSData;

@interface AMSPACTokenTask : AMSTask

@property (readonly) NSString *simLabelID;
@property (retain) NSData *signingData;

- (id)perform;
- (void).cxx_destruct;
- (id)initWithSimLabelID:(id)a0;

@end
