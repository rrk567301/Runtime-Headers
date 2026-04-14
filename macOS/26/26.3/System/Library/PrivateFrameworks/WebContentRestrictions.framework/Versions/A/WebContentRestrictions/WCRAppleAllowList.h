@class NSSet, NSString;

@interface WCRAppleAllowList : NSObject

@property (retain) NSSet *allowList;
@property (readonly, nonatomic) NSString *localPath;

- (void).cxx_destruct;
- (id)initFromFile:(id)a0;

@end
