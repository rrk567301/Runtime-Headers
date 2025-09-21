@class NSSet, NSString;

@interface WCRAppleAllowList : NSObject

@property (retain) NSSet *allowList;
@property (readonly, nonatomic) NSString *localPath;

- (void).cxx_destruct;
- (char)contains:(id)a0;
- (id)initFromFile:(id)a0;

@end
