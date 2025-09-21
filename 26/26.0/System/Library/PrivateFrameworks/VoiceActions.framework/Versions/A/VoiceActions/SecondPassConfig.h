@class NSString;

@interface SecondPassConfig : NSObject

@property (nonatomic) BOOL waitForFinal;
@property (nonatomic) BOOL useEndpointer;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
