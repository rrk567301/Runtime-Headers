@class NSData, NSString;

@interface AVBMACAddress : NSObject <NSCopying> {
    unsigned char _bytes[6];
}

@property (readonly) const char *bytes;
@property (copy) NSData *dataRepresentation;
@property (copy) NSString *stringRepresentation;
@property (getter=isMulticast) BOOL multicast;

+ (id)keyPathsForValuesAffectingDataRepresentation;
+ (id)keyPathsForValuesAffectingMulticast;
+ (id)keyPathsForValuesAffectingStringRepresentation;
+ (id)maapRandomAssign;

- (const char *)bytes;
- (id)stringRepresentation;
- (id)dataRepresentation;
- (id)description;
- (void)setMulticast:(BOOL)a0;
- (id)initWithBytes:(const char *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)getAddress:(char *)a0;
- (void)setDataRepresentation:(id)a0;
- (void)setStringRepresentation:(id)a0;
- (void)_didUpdateBytes;
- (void)_willUpdateBytes;

@end
