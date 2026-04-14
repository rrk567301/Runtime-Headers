@class NSString, UTType, NSDate, NSNumber;

@interface FPSearchOnServerResult : NSObject <NSSecureCoding, NSFileProviderSearchResult> {
    NSString *_providerID;
    NSString *_domainIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double rankingHint;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toSearchableItem;
- (id)initWithFilename:(id)a0 creationDate:(id)a1 contentModificationDate:(id)a2 lastUsedDate:(id)a3 contentType:(id)a4 documentSize:(id)a5 itemIdentifier:(id)a6 providerID:(id)a7 domainIdentifier:(id)a8;

@end
