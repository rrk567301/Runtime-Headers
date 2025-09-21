@class NSString;

@interface VFXUIProperty : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) char readonly;
@property (retain, nonatomic) Class objectClass;

- (void).cxx_destruct;

@end
