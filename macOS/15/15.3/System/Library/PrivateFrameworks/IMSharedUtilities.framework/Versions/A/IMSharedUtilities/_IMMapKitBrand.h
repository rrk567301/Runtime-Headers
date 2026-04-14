@class NSString;

@interface _IMMapKitBrand : IMBrand {
    NSString *_brandURI;
}

+ (id)_imageManager;

- (void)dealloc;
- (id)name;
- (id)_init;
- (BOOL)isVerified;
- (id)localizedResponseTime;
- (id)_initWithMKMapItem:(id)a0 brandURI:(id)a1;
- (id)brandURI;
- (id)primaryPhoneNumber;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
