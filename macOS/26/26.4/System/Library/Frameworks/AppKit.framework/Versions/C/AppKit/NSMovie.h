@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)data;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
