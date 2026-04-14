@interface NUVideoPropertiesRequest : NURenderRequest

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (id)submitSynchronous:(out id *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
