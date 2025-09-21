@class NSString, NSImage, NSDictionary;

@interface VUIAlertAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *titleImage;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSDictionary *metrics;
@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)vui_actionWithTitle:(id)a0 style:(long long)a1 accessibilityIdentifier:(id)a2 handler:(id /* block */)a3;
+ (id)vui_actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)vui_actionWithTitle:(id)a0 titleImage:(id)a1 style:(long long)a2 handler:(id /* block */)a3;
+ (id)vui_actionWithTitle:(id)a0 titleImage:(id)a1 style:(long long)a2 metrics:(id)a3 accessibilityIdentifier:(id)a4 handler:(id /* block */)a5;
+ (id)vui_actionWithTitle:(id)a0 titleImage:(id)a1 style:(long long)a2 metrics:(id)a3 handler:(id /* block */)a4;

- (void).cxx_destruct;

@end
