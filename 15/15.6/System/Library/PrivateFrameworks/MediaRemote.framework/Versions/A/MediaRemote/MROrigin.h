@class NSString, MRPlayerPath, NSData, _MROriginProtobuf;

@interface MROrigin : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) MROrigin *anyOrigin;
@property (class, readonly, nonatomic) MROrigin *localOrigin;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isLocal) char local;
@property (nonatomic, getter=isLocallyHosted) char locallyHosted;
@property (readonly, nonatomic) _MROriginProtobuf *protobuf;
@property (readonly, nonatomic) MROrigin *skeleton;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isHosted) char hosted;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithIdentifier:(int)a0 type:(long long)a1 displayName:(id)a2;
- (id)initWithProtobuf:(id)a0;

@end
