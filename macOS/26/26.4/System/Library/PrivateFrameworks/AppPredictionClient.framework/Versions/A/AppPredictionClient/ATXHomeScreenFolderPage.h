@class NSArray, NSMutableArray;

@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding> {
    NSMutableArray *_contents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;

- (void)addIcon:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithContents:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToATXHomeScreenFolderPage:(id)a0;

@end
