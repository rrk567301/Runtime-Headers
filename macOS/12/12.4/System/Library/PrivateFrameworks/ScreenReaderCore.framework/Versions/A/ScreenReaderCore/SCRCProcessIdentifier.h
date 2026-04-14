@interface SCRCProcessIdentifier : NSObject <NSCopying> {
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _psn;
}

+ (id)processIdentifierWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })psn;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;

@end
