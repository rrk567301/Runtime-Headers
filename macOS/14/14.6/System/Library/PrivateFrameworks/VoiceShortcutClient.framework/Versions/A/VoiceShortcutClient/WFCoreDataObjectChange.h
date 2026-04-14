@class NSString;

@interface WFCoreDataObjectChange : NSObject

@property (readonly, nonatomic) NSString *URIRepresentation;
@property (readonly, nonatomic) unsigned long long objectType;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithObjectID:(id)a0 objectType:(unsigned long long)a1 identifier:(id)a2;

@end
