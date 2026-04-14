@interface QCNSBitmapImageRep : NSBitmapImageRep {
    id _owner;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setOwner:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
