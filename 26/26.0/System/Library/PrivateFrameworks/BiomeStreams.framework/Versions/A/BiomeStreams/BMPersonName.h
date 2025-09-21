@class NSString, BMNameComponents;

@interface BMPersonName : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BMNameComponents *nameComponents;

- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 nameComponents:(id)a1;

@end
