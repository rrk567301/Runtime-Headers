@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (id)URL;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)data;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
