@class NSArray, NSMutableArray;

@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding> {
    NSMutableArray *_contents;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;

- (void)addIcon:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (BOOL)isEqualToATXHomeScreenFolderPage:(id)a0;
- (id)initWithContents:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
