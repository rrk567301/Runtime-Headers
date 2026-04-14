@class NSString, NSPersonNameComponents, NSFileProviderItemVersion, NSDate, NSURL;

@interface FPConflictLoser : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSFileProviderItemVersion *version;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSPersonNameComponents *lastEditorNameComponents;
@property (readonly, copy, nonatomic) NSURL *url;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 filename:(id)a1 url:(id)a2 modificationDate:(id)a3 lastEditorNameComponents:(id)a4;

@end
