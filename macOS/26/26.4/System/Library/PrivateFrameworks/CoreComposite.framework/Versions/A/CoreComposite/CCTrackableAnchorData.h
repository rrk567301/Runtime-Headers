@interface CCTrackableAnchorData : CCData {
    struct CCTrackableAnchorDataStruct { BOOL isEnabled; struct { void /* unknown type, empty encoding */ columns[4]; } transformMatrix; } _anchors[3];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
