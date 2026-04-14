@class NSString, NSDate;

@interface SFFlightTopic : SFQueryTopic <SFFlightTopic>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, nonatomic) int queryType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 date:(id)a1;

@end
