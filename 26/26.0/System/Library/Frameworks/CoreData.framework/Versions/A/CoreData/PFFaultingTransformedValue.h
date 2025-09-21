@class NSAttributeDescription;

@interface PFFaultingTransformedValue : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _storage;
    NSAttributeDescription *_attributeDescription;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStorage:(id)a0 attribute:(id)a1;

@end
