@class NSString, NSArray;

@interface ComponentPostProcess.SupportsSharedTexturesConstant : NSObject <ComponentMisc.LibraryConstant>

@property (class, nonatomic, readonly) NSString *id;
@property (class, nonatomic, readonly) unsigned long long valueType;
@property (class, nonatomic, readonly) NSArray *allValues;

- (id)init;
- (void).cxx_destruct;

@end
