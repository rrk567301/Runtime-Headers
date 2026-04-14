@class NSString, NSURL;

@interface CKItemArtworkImage : NSObject {
    BOOL _prerendered;
}

@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) NSString *imageKind;
@property (readonly, nonatomic) NSURL *URL;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithArtworkDictionary:(id)a0;

@end
