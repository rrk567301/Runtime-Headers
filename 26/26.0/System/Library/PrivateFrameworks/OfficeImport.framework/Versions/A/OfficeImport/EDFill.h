@class EDResources;

@interface EDFill : NSObject <NSCopying> {
    EDResources *mResources;
}

+ (id)fillWithResources:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;

@end
