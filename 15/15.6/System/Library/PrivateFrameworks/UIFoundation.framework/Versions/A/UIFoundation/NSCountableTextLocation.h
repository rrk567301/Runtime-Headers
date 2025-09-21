@class NSString;

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate>

@property (class, readonly) NSCountableTextLocation *endOfDocumentLocation;

@property unsigned long long characterIndex;
@property (readonly, getter=isEndOfDocument) char endOfDocument;
@property (readonly, copy) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (char)isEqualToTextLocation:(id)a0;

@end
