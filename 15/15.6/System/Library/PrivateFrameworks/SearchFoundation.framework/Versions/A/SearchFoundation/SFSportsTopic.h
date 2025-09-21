@class NSString;

@interface SFSportsTopic : SFQueryTopic <SFSportsTopic>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *requestedEntityType;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuery:(id)a0 requestedEntityType:(id)a1 identifier:(id)a2;

@end
