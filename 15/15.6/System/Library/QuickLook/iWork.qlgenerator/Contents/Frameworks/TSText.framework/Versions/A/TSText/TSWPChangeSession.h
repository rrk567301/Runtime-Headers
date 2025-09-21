@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

@property (nonatomic) unsigned int sessionUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;

+ (char)needsObjectUUID;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToSession:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
