@class NSString;
@protocol NSFileProviderItem;

@interface FPTestingIngestion : FPTestingOperation <NSFileProviderTestingIngestion>

@property (readonly, nonatomic) unsigned long long side;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) id<NSFileProviderItem> item;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asIngestion;
- (id)initWithOperationIdentifier:(id)a0 itemIdentifier:(id)a1 item:(id)a2;

@end
