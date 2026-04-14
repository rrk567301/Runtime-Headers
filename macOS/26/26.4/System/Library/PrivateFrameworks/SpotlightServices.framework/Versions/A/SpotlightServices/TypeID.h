@class NSString;

@interface TypeID : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appEntityType;

- (void).cxx_destruct;
- (id)initWithTypeID:(id)a0 appEntityType:(id)a1;

@end
