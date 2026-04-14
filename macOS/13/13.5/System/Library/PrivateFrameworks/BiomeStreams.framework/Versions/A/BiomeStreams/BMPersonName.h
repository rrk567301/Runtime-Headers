@class NSString, BMNameComponents;

@interface BMPersonName : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BMNameComponents *nameComponents;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)initWithName:(id)a0 nameComponents:(id)a1;
- (id)initWithProto:(id)a0;
- (id)proto;

@end
