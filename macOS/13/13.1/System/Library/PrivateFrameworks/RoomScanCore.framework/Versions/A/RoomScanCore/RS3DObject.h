@class NSString, NSUUID, NSArray, NSMutableDictionary;

@interface RS3DObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) float confidence;
@property (retain, nonatomic) NSArray *logits;
@property (retain, nonatomic) NSArray *corners_status;
@property (nonatomic) BOOL status;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (retain) NSString *detection_source;
@property (readonly, nonatomic) NSArray *edges_status;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) NSMutableDictionary *groups;
@property (readonly, nonatomic) NSMutableDictionary *boxesDict;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)translateBy:(SEL)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)hasBoxesDict:(id)a0;
- (BOOL)getDimension:(id)a0 dim:(void *)a1;
- (BOOL)getTransform:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (void)rotateAlongZAxis:(float)a0;
- (void)addGroupId:(int)a0 forGroupType:(id)a1;
- (void)addBoxesDict:(const struct box3d { void /* unknown type, empty encoding */ x0[8]; } *)a0 forDictKey:(id)a1;
- (void)clearGroupInfo:(id)a0;

@end
