@class NSString;

@interface AXAssertionWorkItem : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char acquire;
@property (nonatomic) unsigned long long retries;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 identifier:(id)a1 isAcquisition:(char)a2;

@end
