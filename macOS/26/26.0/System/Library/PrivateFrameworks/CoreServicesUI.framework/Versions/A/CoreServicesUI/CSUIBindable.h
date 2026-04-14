@class NSString;

@interface CSUIBindable : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ rawBindable;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithType:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocumentProxy:(id)a0;

@end
