@class NSArray, NSMutableArray;

@interface ATXHomeScreenFolderPage : NSObject <NSSecureCoding> {
    NSMutableArray *_contents;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *contents;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContents:(id)a0;
- (void)addIcon:(id)a0;
- (id)dictionaryRepresentationForIntrospection;
- (char)isEqualToATXHomeScreenFolderPage:(id)a0;

@end
