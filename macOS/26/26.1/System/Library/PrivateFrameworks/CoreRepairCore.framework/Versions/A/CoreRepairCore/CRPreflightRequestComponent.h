@class NSString;

@interface CRPreflightRequestComponent : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *asid;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)initWithComponentType:(id)a0 identifier:(id)a1 asid:(id)a2;

@end
