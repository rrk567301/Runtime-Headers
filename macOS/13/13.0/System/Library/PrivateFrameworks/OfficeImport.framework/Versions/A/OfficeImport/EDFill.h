@class EDResources;

@interface EDFill : NSObject <NSCopying> {
    EDResources *mResources;
}

+ (id)fillWithResources:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithResources:(id)a0;

@end
