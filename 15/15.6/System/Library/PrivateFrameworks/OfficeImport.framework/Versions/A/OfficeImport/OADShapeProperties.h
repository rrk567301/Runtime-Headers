@interface OADShapeProperties : OADGraphicProperties {
    char mIsTextBox;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isTextBox;
- (void)setIsTextBox:(char)a0;

@end
