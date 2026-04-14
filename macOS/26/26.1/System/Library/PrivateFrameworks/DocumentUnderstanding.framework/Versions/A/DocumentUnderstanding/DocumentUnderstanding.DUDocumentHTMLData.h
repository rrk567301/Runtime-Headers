@class NSString, _TtC21DocumentUnderstanding19DUDocumentEmailData;

@interface DocumentUnderstanding.DUDocumentHTMLData : NSObject <NSCoding, NSCopying> {
    void /* function */ htmlString;
}

@property (nonatomic, copy) NSString *htmlString;
@property (nonatomic, retain) _TtC21DocumentUnderstanding19DUDocumentEmailData *documentEmailData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
