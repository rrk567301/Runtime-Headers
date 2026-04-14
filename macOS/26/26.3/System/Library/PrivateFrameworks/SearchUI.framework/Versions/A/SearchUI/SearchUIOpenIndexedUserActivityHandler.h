@interface SearchUIOpenIndexedUserActivityHandler : SearchUIOpenUserActivityHandler

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (id)destinationApplicationBundleIdentifier;
- (void)getUserActivityForCommand:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;

@end
