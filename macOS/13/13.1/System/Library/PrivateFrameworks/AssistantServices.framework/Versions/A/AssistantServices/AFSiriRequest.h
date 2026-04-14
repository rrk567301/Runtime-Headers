@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setRefId:) NSString *_refId;
@property (copy, nonatomic, setter=_setOriginatingAceID:) NSString *_originatingAceID;
@property (copy, nonatomic, setter=_setTurnId:) NSUUID *_turnId;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_initWithOriginatingAceID:(id)a0;
- (BOOL)_makeAppFrontmost;
- (id)_af_analyticsContextDescription;
- (id)_initWithOriginatingAceID:(id)a0 identifier:(id)a1 turnId:(id)a2;
- (id)_descriptionWithProperties:(id)a0;
- (id)requestName;

@end
