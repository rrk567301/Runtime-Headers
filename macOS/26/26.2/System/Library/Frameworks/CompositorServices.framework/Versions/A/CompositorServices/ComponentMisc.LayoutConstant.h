@class NSString, NSArray;

@interface ComponentMisc.LayoutConstant : NSObject <ComponentMisc.LibraryConstant>

@property (class, nonatomic, readonly) NSString *id;
@property (class, nonatomic, readonly) unsigned long long valueType;
@property (class, nonatomic, readonly) NSArray *allValues;

- (void).cxx_destruct;
- (id)init;

@end
