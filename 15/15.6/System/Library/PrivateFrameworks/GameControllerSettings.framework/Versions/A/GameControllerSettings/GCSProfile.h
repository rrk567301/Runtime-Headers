@class NSUUID, NSString, NSDictionary, NSDate;
@protocol GCSJSONObject;

@interface GCSProfile : NSObject <GCSJSONSerializable, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly) NSUUID *defaultProfileUUID;
@property (class, readonly) GCSProfile *defaultProfile;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *persistentControllerIdentifier;
@property (readonly, nonatomic) NSString *gameBundleIdentifier;
@property (readonly, nonatomic, getter=isBaseProfile) char baseProfile;
@property (readonly, nonatomic) char customizable;
@property (readonly, nonatomic) NSString *sfSymbolsName;
@property (readonly, nonatomic) NSDictionary *elementMappings;
@property (readonly, nonatomic) char hapticFeedbackOverride;
@property (readonly, nonatomic) double hapticStrength;
@property (readonly, nonatomic) long long doublePressShareGesture;
@property (readonly, nonatomic) long long longPressShareGesture;
@property (readonly, nonatomic) char lightbarOverride;
@property (readonly, nonatomic) char lightbarCustomColorEnabled;
@property (readonly, nonatomic) long long lightbarColor;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic) NSString *id;

+ (id)profile;
+ (id)newBaseProfile;
+ (id)archivalClasses;
+ (id)adhocProfileForController:(id)a0 gameBundleIdentifier:(id)a1;
+ (long long)defaultDoublePressGesture;
+ (long long)defaultLongPressGesture;
+ (id)elementMappingsFrom:(id)a0 for:(id)a1;
+ (id)profileWithName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)anonymizedCopy;
- (id)initWithJSONObject:(id)a0;
- (id)elementMappingsWithJSONDictionary:(id)a0;
- (id)initWithUUID:(id)a0 name:(id)a1 persistentControllerIdentifier:(id)a2 gameBundleIdentifier:(id)a3 baseProfile:(char)a4 customizable:(char)a5 sfSymbolsName:(id)a6 elementMappings:(id)a7 hapticFeedbackOverride:(char)a8 hapticStrength:(double)a9 doublePressShareGesture:(long long)a10 longPressShareGesture:(long long)a11 lightbarOverride:(char)a12 lightbarCustomColorEnabled:(char)a13 lightbarColor:(long long)a14;

@end
