@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (void)setType:(int)a0;
- (int)type;
- (id)description;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;

@end
