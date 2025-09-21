@class NSData, NSString;

@interface AVBMACAddress : NSObject <NSCopying> {
    unsigned char _bytes[6];
}

@property (readonly) const char *bytes;
@property (copy) NSData *dataRepresentation;
@property (copy) NSString *stringRepresentation;
@property (getter=isMulticast) char multicast;

+ (id)keyPathsForValuesAffectingDataRepresentation;
+ (id)keyPathsForValuesAffectingMulticast;
+ (id)keyPathsForValuesAffectingStringRepresentation;
+ (id)maapRandomAssign;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (const char *)bytes;
- (id)stringRepresentation;
- (id)dataRepresentation;
- (void)setMulticast:(char)a0;
- (void)getAddress:(char *)a0;
- (id)initWithBytes:(const char *)a0;
- (void)setDataRepresentation:(id)a0;
- (void)setStringRepresentation:(id)a0;
- (void)_didUpdateBytes;
- (void)_willUpdateBytes;

@end
