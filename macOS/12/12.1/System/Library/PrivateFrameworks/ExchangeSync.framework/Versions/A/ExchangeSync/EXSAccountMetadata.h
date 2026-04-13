@class NSString;

@interface EXSAccountMetadata : NSObject

@property long long accountID;
@property unsigned long long enabledDataclasses;
@property (retain) NSString *accountKey;

- (void).cxx_destruct;
- (BOOL)isEqualToMetadata:(id)a0;
- (void)updateWithACAccount:(id)a0;

@end
