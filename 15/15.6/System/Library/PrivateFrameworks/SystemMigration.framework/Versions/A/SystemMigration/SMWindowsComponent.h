@class NSString, NSImage, NSDictionary, NSNumber, NSMutableArray;

@interface SMWindowsComponent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSMutableArray *subcomponents;
@property (readonly, retain) NSNumber *identifier;
@property (readonly) long long type;
@property (readonly, retain) NSString *name;
@property (retain) NSNumber *size;
@property (readonly, retain) NSImage *image;
@property (readonly, retain) NSDictionary *attributes;
@property char isContainer;
@property (readonly, retain) NSString *localizedDescription;

+ (long long)componentTypeFromString:(id)a0;
+ (id)profileWithDictionary:(id)a0;
+ (id)stringFromComponentType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSubcomponent:(id)a0;
- (id)allSubcomponents;
- (id)dictionaryRepresentationSanitized:(char)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2 size:(id)a3 image:(id)a4 attributes:(id)a5;
- (char)isEqualToXMComponent:(id)a0;
- (char)requiresProtectedDataContainer;
- (id)sanitizedDictionaryRepresentation;
- (char)sizeDeferred;

@end
