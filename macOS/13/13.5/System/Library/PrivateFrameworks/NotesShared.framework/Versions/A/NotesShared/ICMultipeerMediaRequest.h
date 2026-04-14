@class ICMedia;

@interface ICMultipeerMediaRequest : ICMultipeerResourceRequest

@property (retain) ICMedia *media;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)note;
- (void)startRequest;

@end
