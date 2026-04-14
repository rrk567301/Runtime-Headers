@class NSString, NSURL;

@interface CKItemArtworkImage : NSObject {
    BOOL _prerendered;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSString *imageKind;
@property (readonly, nonatomic) NSURL *URL;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithArtworkDictionary:(id)a0;

@end
